(()=>{const e="std-slideshow";Drupal.behaviors[e]={attach:()=>{once(e,".std-slideshow").forEach((e=>{const t=e.querySelector(".swiper");null!==t&&new Swiper(t,{autoHeight:!0,navigation:{nextEl:t.querySelector(".swiper-button-next"),prevEl:t.querySelector(".swiper-button-prev")},pagination:{el:t.querySelector(".swiper-pagination")}})}))}}})();
//# sourceMappingURL=std-slideshow.js.map
