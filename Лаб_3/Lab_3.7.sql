SELECT "Name", "SizeUnitMeasureCode"
FROM "Production"."Product"
UNION 
SELECT "Name", "UnitMeasureCode"
FROM "Production"."UnitMeasure";
