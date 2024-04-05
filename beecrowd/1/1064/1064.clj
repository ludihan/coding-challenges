(let [lista   (filter pos? (repeatedly 6 read))
      tamanho (count lista)]
  (println tamanho "valores positivos")
  (printf "%.1f\n" (/ (reduce + lista) tamanho)))
