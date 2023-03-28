document.querySelectorAll('.std-acc').forEach(acc => {
  const items = acc.querySelectorAll('.std-acc__item');

  const open = item => {
    if (item.classList.contains('is-open')) return;

    const body = item.querySelector('.std-acc__body');
    if (body === null) return;

    const inner = item.querySelector('.std-acc__inner');
    if (inner === null) return;

    body.style.height = `${inner.offsetHeight}px`;
    window.setTimeout(() => body.style.height = null, 400);
    item.classList.add('is-open');
  }

  const close = item => {
    if (!item.classList.contains('is-open')) return;

    const body = item.querySelector('.std-acc__body');
    if (body === null) return;

    const inner = item.querySelector('.std-acc__inner');
    if (inner === null) return;

    body.style.height = `${inner.offsetHeight}px`;
    window.setTimeout(() => {
      body.style.height = null;
      item.classList.remove('is-open');
    });
  }

  items.forEach((item, i) => {
    const header = item.querySelector('.std-acc__header');
    if (header === null) return;

    if (i === 0) {
      item.classList.add('is-open');
    }

    header.addEventListener('click', () => {
      const isOpen = item.classList.contains('is-open');
      if (isOpen) close(item);
      else open(item);
    });
  });
});
