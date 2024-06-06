SELECT p."Name" , p."ListPrice" ,p."ProductSubcategoryID"  
FROM "Production"."Product" p
INNER JOIN (
    SELECT "ProductSubcategoryID", MAX("ListPrice") AS MaxListPrice
    FROM "Production"."Product"
    GROUP BY "ProductSubcategoryID"
) AS maxprice ON p."ProductSubcategoryID" = maxprice."ProductSubcategoryID" AND p."ListPrice" = maxprice.MaxListPrice
