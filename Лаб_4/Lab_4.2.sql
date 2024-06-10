--2	Ранжирование товаров по цене списка в порядке возрастания цены. 
--("Production"."Product"). Примечание к ранжированию – ранг может начинаться 
--с произвольного числа (например, 2 или 5), 
SELECT  "ProductID" , "Name",
       (SELECT COUNT(*)
        FROM "Production"."Product" p2
        WHERE p2."StandardCost" <= p1."StandardCost") + 4 AS "Rank"
FROM "Production"."Product" p1
ORDER BY "Rank";
