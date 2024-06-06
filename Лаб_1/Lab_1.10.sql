SELECT  "ProductID"  ,"Name"  ,"Size" ,"Color" ,
NULLIF  ("Size"  , '0') AS "Size" 
FROM "Production"."Product"
WHERE "Size" IS NOT NULL;



