--Показать список подкатегорий продуктов  (ProductSubcategoryID), которые имеют несколько
-- цен реализации (ListPrice) меньше 300, из таблицы Production.Product,
-- используя SELF JOIN
SELECT DISTINCT P1."ProductSubcategoryID"
FROM "Production"."Product" P1
INNER JOIN "Production"."Product" P2 ON P1."ProductSubcategoryID" = P2."ProductSubcategoryID" AND 
P1."ListPrice" < 300 AND P2."ListPrice" < 300
