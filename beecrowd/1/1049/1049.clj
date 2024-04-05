(def animais {'vertebrado {'ave {'carnivoro "aguia"
                                 'onivoro "pomba"}
                           'mamifero {'onivoro "homem"
                                      'herbivoro "vaca"}}
              'invertebrado {'inseto {'hematofago "pulga"
                                      'herbivoro "lagarta"}
                             'anelideo {'hematofago "sanguessuga"
                                        'onivoro "minhoca"}}})
(println
  (get (get (get animais (read)) (read)) (read)))
