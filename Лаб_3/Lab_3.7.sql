--Показать комбинированный список таблиц Production.Product по 	
--полям Name, SizeUnitMeasureCode, Production.UnitMeasure по полям Name, 
--UnitMeasureCode, используя UNION
SELECT "Name", "SizeUnitMeasureCode"
FROM "Production"."Product"
UNION 
SELECT "Name", "UnitMeasureCode"
FROM "Production"."UnitMeasure";
