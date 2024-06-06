SELECT "BusinessEntityID"
FROM "Person"."Person"
INTERSECT
SELECT "BusinessEntityID"
FROM "HumanResources"."Employee";
