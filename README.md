# Checkpoint Racing 🏁

A playful, hill-climbing-racing-themed template for building a personal
memory website — photos, videos, an achievement wall, a quiz, and a
final message, all wrapped in a "race through checkpoints" experience.

Originally built for Raksha Bandhan, but every label is fully editable,
so it works just as well for a birthday, an anniversary, a friendship
day, a graduation gift, or anything else you want to turn into a small
interactive memory site.

**No build tools, no frameworks, no dependencies to install.** It's
three plain files plus your media — open `index.html` in a browser and
it works.

---

## Quick start

1. **Fork or download this repo.**
2. **Drop your photos and videos into the `assets/` folder.**
3. **Open `config.js`** and fill in your own content — see below.
4. **Open `index.html`** in a browser to preview.
5. **Deploy** (see [Deploying](#deploying) below).

That's it — you never need to touch `index.html`, `style.css`, or
`app.js` unless you want to change the design itself.

---

## Editing `config.js`

Every section of the page is one object in `CONFIG`. Each accepts a
`tag`, `title`, and `subtitle`, plus a list (photos, cards, videos, or
quiz questions) that can be **any length** — add or remove entries
freely and the layout adjusts automatically.

```js
checkpoint01: {
  tag: "CHECKPOINT 01",
  title: "THE BEGINNING",
  subtitle: "Where it all started.",
  photos: [
    { src: "assets/photo1.jpg", label: "PHOTO 01" },
    { src: "assets/photo2.jpg", label: "PHOTO 02" }
    // add as many as you like
  ]
}
```

**Photos vs. videos:** anywhere you provide a `src`/`photo`/`media`
path, you can point to either an image or a video file — the template
detects the type from the file extension (`.mp4`, `.mov`, `.webm`,
`.m4v` are treated as video; everything else as an image) and renders
it correctly. Videos autoplay, loop, and are muted automatically.

**Optional sections:** the collectible gallery (`checkpointGallery`)
and the quiz (`quiz`) can be skipped entirely — set them to `null` in
`config.js` and that whole checkpoint disappears from the page.

---

## Project structure

```
.
├── index.html      # static shell — you shouldn't need to edit this
├── style.css        # all design/styling — generic, no personal content
├── app.js            # reads config.js and builds the page — no personal content
├── config.js          # <-- THE FILE YOU EDIT
├── assets/            # put your photos and videos here
└── README.md
```

---

## Deploying

The fastest free option is **Netlify Drop** — no account required:

1. Make sure `index.html`, `style.css`, `app.js`, `config.js`, and
   `assets/` are all in the same folder.
2. Go to [app.netlify.com/drop](https://app.netlify.com/drop) and drag
   the whole folder in.
3. You'll get a live URL in seconds — open it on your phone to check
   everything looks right.

Other equally good free options: **GitHub Pages**, **Vercel**,
**Cloudflare Pages** — any static host works, since this is a plain
HTML/CSS/JS site with no server or build step.

### Putting it on an NFC tag

If you're linking this to a physical NFC tag (like a Rakhi thread, a
card, or a keychain):

1. Install a free NFC-writing app (e.g. "NFC Tools" on iOS/Android).
2. Choose **Write → Add a record → URL/URI** and paste your deployed
   link.
3. Tap your phone against the NFC chip to write it.

Tapping the tag with any phone will now open the site directly.

---

## Design notes

- The visual style is an **original** hill-climbing-racing aesthetic
  (rolling hills, dirt track, checkered flags, a custom-drawn vehicle)
  — it does not reproduce any existing game's logo, characters, or
  branded artwork.
- Layout is mobile-first and capped at a phone-width frame
  (`#app-frame`, 480px max) so it never stretches oddly on tablets or
  desktops.
- All video frames use `object-fit: contain` so footage is never
  cropped, regardless of its aspect ratio.

---

## License

MIT — see [LICENSE](LICENSE). Fork it, remix it, use it for whatever
occasion you want.
