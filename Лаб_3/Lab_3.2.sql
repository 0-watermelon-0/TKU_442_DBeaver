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
