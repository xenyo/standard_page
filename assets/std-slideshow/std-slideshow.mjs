(() => {
  const behavior = 'std-slideshow';
  Drupal.behaviors[behavior] = {
    attach: () => {
      once(behavior, '.std-slideshow').forEach(paragraph => {
        const swiperEl = paragraph.querySelector('.swiper');
        if (swiperEl === null) return;

        const swiper = new Swiper(swiperEl, {
          autoHeight: true,
          navigation: {
            nextEl: swiperEl.querySelector('.swiper-button-next'),
            prevEl: swiperEl.querySelector('.swiper-button-prev'),
          },
          pagination: {
            el: swiperEl.querySelector('.swiper-pagination'),
          }
        });
      });
    },
  };
})();
