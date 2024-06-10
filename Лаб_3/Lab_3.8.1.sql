--Показать список BusinessEntityID, которые содержатся и в таблице Person.Person,
--  и в 	таблице HumanResources.Employee
SELECT "BusinessEntityID"
FROM "Person"."Person"
INTERSECT
SELECT "BusinessEntityID"
FROM "HumanResources"."Employee";
