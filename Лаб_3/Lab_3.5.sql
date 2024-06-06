SELECT DISTINCT P."TaxAmt"
FROM "Sales"."SalesOrderHeader" P
INNER JOIN "Sales"."SalesOrderHeader" P2
ON P."CustomerID" = P2."CustomerID" AND P."SalesOrderID" <> P2."SalesOrderID"
