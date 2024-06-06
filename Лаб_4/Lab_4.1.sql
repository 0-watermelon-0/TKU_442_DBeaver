SELECT "ProductNumber" , "Size"
FROM "Production"."Product"
WHERE "Size" >= '0'
ORDER BY "Size" DESC
LIMIT 1;
