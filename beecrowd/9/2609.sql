SELECT categories.name, sum(products.amount)
FROM categories
JOIN products
ON products.id_categories = categories.id
GROUP BY categories.name
ORDER BY categories.name;
