(defn time-conv [total]
  (do
    (def h (quot total 3600))
    (def m (quot (- total (* h 3600)) 60))
    (def s (- total (* h 3600) (* m 60)))
    (printf
      "%d:%d:%d\n"
      h
      m
      s)))

(time-conv (read))
