--Показать список продуктов (поле Name), в котором указано, 
--есть ли у продукта количество списаний или нет, из таблиц Production.Product,
-- Production.WorkOrder, используя LEFT OUTER JOIN
SELECT 
    P."Name",
    COALESCE(WO."QtyScrapped", 0) AS "ScrapCount"
FROM 
    "Production"."Product" P
LEFT OUTER JOIN 
    (SELECT 
         WO."ProductID",
         COUNT(WO."ScrapReasonID") AS "QtyScrapped"
     FROM 
         "Production"."WorkOrder" WO
     WHERE 
         WO."ScrapReasonID" IS NOT NULL
     GROUP BY 
         WO."ProductID") WO
ON 
    P."ProductID" = WO."ProductID"
