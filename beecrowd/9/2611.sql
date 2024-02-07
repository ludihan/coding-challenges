SELECT movies.id, name
FROM movies
INNER JOIN genres
ON movies.id_genres = genres.id
WHERE description
LIKE 'Action';
