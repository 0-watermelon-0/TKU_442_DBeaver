SELECT  "ProductID" , "Name",
       (SELECT COUNT(*)
        FROM "Production"."Product" p2
        WHERE p2."StandardCost" <= p1."StandardCost") + 4 AS "Rank"
FROM "Production"."Product" p1
ORDER BY "Rank";
