select products.name, 'Ajax SA' as name from products
where products.id_providers = (select id from providers where name = 'Ajax SA');
