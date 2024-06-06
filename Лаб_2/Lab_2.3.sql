SELECT "ProductLine", MAX("Weight") AS MaxWeight
FROM "Production"."Product"
GROUP BY "ProductLine";
