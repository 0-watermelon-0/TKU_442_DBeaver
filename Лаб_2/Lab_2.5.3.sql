--5)	Вывести BusinessEntityID, PayFrequency и максимальный Rate для
-- BusinessEntityID с разными PayFrequency, предусмотреть вывод максимального
-- Rate для всех PayFrequency у различных BusinessEntityID из таблицы
-- HumanResources.EmployeePayHistory. (Использовать ROOLUP). использовать GROUPING SETS
SELECT "BusinessEntityID", 
"PayFrequency",
MAX("Rate") AS MaxRate
FROM "HumanResources"."EmployeePayHistory"
GROUP BY "BusinessEntityID", "PayFrequency",
GROUPING SETS (("BusinessEntityID", "PayFrequency"), ());

