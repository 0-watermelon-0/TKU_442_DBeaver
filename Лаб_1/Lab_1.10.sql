--Заменить на NULL значение в поле ListPrice, если цена равна нулю
--Показать поля ProductID, Name, Size, Color из таблицы Production.Product..
SELECT  "ProductID"  ,"Name"  ,"Size" ,"Color" ,
NULLIF  ("Size"  , '0') AS "Size" 
FROM "Production"."Product"
WHERE "Size" IS NOT NULL;



