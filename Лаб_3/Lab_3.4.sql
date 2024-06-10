--Показать список покупателей (CustomerID), которые имеют несколько сумм
--налога 	(TaxAmt), 	из 	таблицы Sales.SalesOrderHeader, 
--используя SELF JOIN
SELECT DISTINCT 		P."CustomerID"
FROM "Sales"."SalesOrderHeader" P
INNER JOIN "Sales"."SalesOrderHeader" P2
ON P."CustomerID" = P2."CustomerID" AND P."SalesOrderID" <> P2."SalesOrderID"
WHERE P."TaxAmt" != P2."TaxAmt"
