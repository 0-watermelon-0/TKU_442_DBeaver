--Показать список сумм налога (TaxAmt), к которым относятся несколько покупателей 
--(CustomerID), из таблицы Sales.SalesOrderHeader, используя SELF JOIN
SELECT DISTINCT P."TaxAmt"
FROM "Sales"."SalesOrderHeader" P
INNER JOIN "Sales"."SalesOrderHeader" P2
ON P."CustomerID" = P2."CustomerID" AND P."SalesOrderID" <> P2."SalesOrderID"
