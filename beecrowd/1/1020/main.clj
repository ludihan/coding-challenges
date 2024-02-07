(defn day-conv [days]
  (do
    (def y (quot days 365))
    (def m (quot (- days (* y 365)) 30))
    (def d (- days (* y 365) (* m 30)))
    (printf
      "%d ano(s)\n%d mes(es)\n%d dia(s)\n"
      y
      m
      d)))

(day-conv (read))
