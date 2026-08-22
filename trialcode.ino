<!doctype html>
<html lang="en">
 <head><script>window["__codeletBootstrap__"]=JSON.parse('{"A":"A","B":"20260821-05-d0038b4","C":{"Abril Fatface":"YACgEZbkUVE,0","Alfa Slab One":"YACgEYS9sJU,0","Anton":"YACgEcYqQ-A,0","Archivo":"YAHO2-t-jNE,0","Arial":"YAGyDvJ_4Ts,0","Bebas Neue":"YACgESME5ew,0","Bricolage Grotesque":"YAFyMcdwzpc,0","Canva Sans":"YAFLd8sKbwc,2","Caveat":"YALBs2ploWQ,0","Comic Sans MS":"YAHO2VMiyZo,0","Cormorant Garamond":"YAFdJhX-538,0","Courier New":"YAGzXiGs0_8,0","DM Sans":"YAD1aU3sLnI,0","DM Serif Display":"YAD1aYG82rc,0","Forum":"YACgEcnnqB4,0","Fraunces":"YAEul-FRQw4,0","Georgia":"YAGzXkO0pEM,0","Helvetica Neue":"YAFcf6CtJfI,0","Impact":"YAFcfnjI7Vk,0","Inter":"YAFdJvSyp_k,3","Iowan Old Style":"YAGNIFa8j9o,0","Jacques Francois":"YAHO2a5g66Q,0","JetBrains Mono":"YAFdJksXcAk,0","Libre Baskerville":"YACgEUFdPdA,0","Manrope":"YAHO2b2feC4,0","Merriweather":"YACgEXvHxxs,0","Montserrat":"YADLjI9qxTA,0","Nunito":"YACgEX8C5Gg,0","Oleo Script":"YACgEQQ14jI,0","Phantom Sans":"YAHO2E8Pb88,0","Playfair Display":"YACgEYmuCJE,0","Poppins":"YAFdJjbTu24,1","Press Start 2P":"YAFyGr-8pmQ,0","Quicksand":"YADWjpfPmdk,0","Raleway":"YACgEVg3xZg,0","Segoe UI":"YAHNdRD1Klw,0","Source Sans 3":"YAG4lO1Mj10,0","Spectral":"YAHO2rVUHIM,0","Times New Roman":"YAGzXW3gftg,0","Times":"YAGzXW3gftg,0","Ubuntu":"YACgERDU--Q,0","Work Sans":"YAGXhLOKv44,0","Yellowtail":"YACgEYG4kG4,0","ui-monospace":"YADlN8CFZ8Q,0","ui-sans-serif":"YACkoN-xg4g,0"}}');</script><script src="/_sdk/50d846425a1e5082.telemetry_sdk.js" integrity="sha512-Otbex+ztlVbcEGql0rXGd/3E3ee/hqAntg6DeuUEMG6pIPbXGOSvZbFZVzknAXi1tH/itQ+ijEhOTr2aWj6CXg=="></script>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Rakhi Racing</title>
  <script src="https://cdn.tailwindcss.com/3.4.17"></script>
  <link href="https://fonts.googleapis.com/css2?family=Fredoka+One&amp;family=Caveat:wght@500;700&amp;family=Nunito:wght@400;600;700;800&amp;display=swap" rel="stylesheet">
  <script src="https://cdn.jsdelivr.net/npm/lucide@0.263.0/dist/umd/lucide.min.js"></script>
  <style>
        :root {
            --sky: #4FC3F7;
            --grass: #4CAF50;
            --dirt: #8D6E63;
            --dirt-dark: #5D4037;
            --accent: #FF6F00;
            --gold: #FFD600;
            --card-bg: #FFF8E1;
        }
        body { font-family: 'Nunito', sans-serif; overflow-x: hidden; }
        .font-game { font-family: 'Fredoka One', cursive; }
        .font-handwritten { font-family: 'Caveat', cursive; }

        @keyframes bounce-car {
            0%, 100% { transform: translateY(0) rotate(-8deg); }
            50% { transform: translateY(-12px) rotate(-6deg); }
        }
        @keyframes dust {
            0% { opacity: 0.8; transform: scale(1) translateX(0); }
            100% { opacity: 0; transform: scale(2) translateX(-30px); }
        }
        @keyframes flag-wave {
            0%, 100% { transform: rotate(-5deg); }
            50% { transform: rotate(5deg); }
        }
        .car-bounce { animation: bounce-car 1.2s ease-in-out infinite; }
        .dust-particle { animation: dust 1.5s ease-out infinite; }
        .flag-wave { animation: flag-wave 0.8s ease-in-out infinite; transform-origin: bottom center; }

        .fade-in { opacity: 0; transform: translateY(30px); transition: all 0.6s ease; }
        .fade-in.visible { opacity: 1; transform: translateY(0); }

        .placeholder-frame {
            background: repeating-linear-gradient(45deg, #e0e0e0, #e0e0e0 10px, #f5f5f5 10px, #f5f5f5 20px);
            border: 3px dashed #9E9E9E;
            border-radius: 12px;
            display: flex; align-items: center; justify-content: center;
            flex-direction: column; gap: 8px;
            min-height: 200px;
            position: relative;
            overflow: hidden;
        }
        .video-placeholder {
            min-height: 220px;
            background: #1a1a1a;
            border: 3px solid var(--gold);
            border-radius: 12px;
        }
        .checkpoint-bar {
            background: linear-gradient(90deg, var(--accent), var(--gold));
            height: 4px; border-radius: 2px;
        }
        .achievement-card {
            background: linear-gradient(135deg, #FFF8E1, #FFECB3);
            border: 2px solid var(--gold);
            border-radius: 16px;
        }
        .quiz-option {
            transition: all 0.2s;
            cursor: pointer;
        }
        .quiz-option:hover { transform: scale(1.03); }
        .quiz-option.correct { background: #4CAF50 !important; color: white !important; }
        .quiz-option.wrong { background: #EF5350 !important; color: white !important; }
    </style>
  <script src="/_sdk/b3bf9e8ac58e6ad6.data_sdk.js" type="text/javascript" integrity="sha512-otc1u9NYq9Ms5Jt//7vmhrrqR5CLPr8Jdgs6741gqniClfLMcfmC+jK/cKuQdhLv6G0esJ/FzaMS9tv0T/vj/Q=="></script>
  <script src="/_sdk/a27879be4562f807.resizing_sdk.js" type="text/javascript" integrity="sha512-trcxRwz+QLrzK0Dqg95xqVRryR7WtWui2YopXyzOIr3WMde3j/xCRgT63/b/EAg7klDsAOuHzoRgoryhwm8QFw=="></script>
 </head>
 <body data-template-id="__page-root" class="w-full"><!-- ===== START SCREEN ===== -->
  <section id="start-screen" class="relative w-full" style="min-height: calc(100 * min(var(--vh, 1vh), 1vh));"><!-- Sky -->
   <div class="absolute inset-0" style="background: linear-gradient(180deg, #29B6F6 0%, #81D4FA 60%, #E1F5FE 100%);"></div><!-- Sun -->
   <div class="absolute top-8 right-8 w-16 h-16 rounded-full" style="background: radial-gradient(#FFF176, #FFD600); box-shadow: 0 0 40px #FFD600;"></div><!-- Clouds -->
   <div class="absolute top-12 left-6 w-20 h-8 rounded-full bg-white opacity-80"></div>
   <div class="absolute top-20 left-24 w-14 h-6 rounded-full bg-white opacity-60"></div>
   <div class="absolute top-16 right-24 w-16 h-7 rounded-full bg-white opacity-70"></div><!-- Hills background -->
   <div class="absolute bottom-0 left-0 w-full" style="height: 55%;">
    <svg viewbox="0 0 400 200" preserveaspectratio="none" class="absolute bottom-0 w-full h-full"><path d="M0,200 Q50,80 100,120 Q150,50 200,100 Q250,40 300,90 Q350,60 400,110 L400,200 Z" fill="#66BB6A" /> <path d="M0,200 Q60,120 120,140 Q180,90 240,130 Q300,80 360,120 Q380,100 400,130 L400,200 Z" fill="#4CAF50" /> <path d="M0,200 Q80,150 150,160 Q220,130 280,155 Q340,140 400,160 L400,200 Z" fill="#388E3C" />
    </svg><!-- Dirt track -->
    <div class="absolute bottom-0 left-0 w-full h-20" style="background: linear-gradient(180deg, #8D6E63, #6D4C41); border-top: 3px solid #A1887F;"></div><!-- Rocks -->
    <div class="absolute bottom-4 left-12 w-4 h-3 rounded bg-gray-500 opacity-60"></div>
    <div class="absolute bottom-6 left-32 w-3 h-2 rounded bg-gray-600 opacity-50"></div>
    <div class="absolute bottom-3 right-20 w-5 h-3 rounded bg-gray-500 opacity-50"></div>
   </div><!-- Car -->
   <div class="absolute car-bounce" style="bottom: 70px; left: 20%;">
    <svg width="80" height="50" viewbox="0 0 80 50"><rect x="10" y="20" width="60" height="20" rx="8" fill="#FF6F00" /> <rect x="20" y="10" width="35" height="15" rx="5" fill="#FFB74D" /> <rect x="25" y="12" width="12" height="10" rx="2" fill="#81D4FA" /> <rect x="40" y="12" width="12" height="10" rx="2" fill="#81D4FA" /> <circle cx="22" cy="42" r="7" fill="#424242" /><circle cx="22" cy="42" r="4" fill="#757575" /> <circle cx="58" cy="42" r="7" fill="#424242" /><circle cx="58" cy="42" r="4" fill="#757575" />
    </svg><!-- Dust -->
    <div class="dust-particle absolute -left-4 bottom-0 w-6 h-6 rounded-full bg-yellow-700 opacity-40"></div>
    <div class="dust-particle absolute -left-2 bottom-2 w-4 h-4 rounded-full bg-yellow-800 opacity-30" style="animation-delay: 0.3s;"></div>
   </div><!-- Flags -->
   <div class="absolute flag-wave" style="bottom: 80px; right: 15%;">
    <svg width="30" height="50" viewbox="0 0 30 50"><rect x="2" y="0" width="3" height="50" fill="#5D4037" /> <rect x="5" y="2" width="22" height="16" fill="white" /> <rect x="5" y="2" width="11" height="8" fill="#1a1a1a" /> <rect x="16" y="10" width="11" height="8" fill="#1a1a1a" />
    </svg>
   </div>
   <div class="absolute flag-wave" style="bottom: 85px; left: 60%; animation-delay: 0.4s;">
    <svg width="24" height="40" viewbox="0 0 30 50"><rect x="2" y="0" width="3" height="50" fill="#5D4037" /> <rect x="5" y="2" width="22" height="16" fill="white" /> <rect x="5" y="2" width="11" height="8" fill="#1a1a1a" /> <rect x="16" y="10" width="11" height="8" fill="#1a1a1a" />
    </svg>
   </div><!-- Content overlay -->
   <div class="relative z-10 flex flex-col items-center justify-center text-center px-6 pt-16 pb-32" style="min-height: calc(100 * min(var(--vh, 1vh), 1vh));">
    <div class="mb-2 text-sm font-bold text-white bg-black/30 px-3 py-1 rounded-full">
     🏁 NEW GAME
    </div>
    <h1 data-template-id="main-title" class="canva-text font-game text-5xl md:text-7xl text-white drop-shadow-lg mb-2" style="text-shadow: 3px 3px 0 #FF6F00, 6px 6px 0 rgba(0,0,0,0.2);"></h1>
    <p data-template-id="main-subtitle" class="canva-text text-lg md:text-xl text-white/90 font-semibold mb-8"></p><button data-template-id="start-button" class="canva-button font-game text-xl md:text-2xl px-8 py-4 rounded-full shadow-lg hover:scale-105 transition-transform" onclick="document.getElementById('level-01').scrollIntoView({behavior:'smooth'})"></button>
    <p data-template-id="start-hint" class="canva-text text-white/70 text-sm mt-4"></p>
   </div>
  </section><!-- ===== LEVEL 01 ===== -->
  <section id="level-01" class="w-full py-12 px-4" style="background: linear-gradient(180deg, #E8F5E9, #C8E6C9);">
   <div class="max-w-lg mx-auto">
    <div class="fade-in text-center mb-8">
     <div class="checkpoint-bar w-full mb-4"></div>
     <h2 data-template-id="level01-title" class="canva-text font-game text-2xl md:text-3xl"></h2>
     <p data-template-id="level01-subtitle" class="canva-text text-sm mt-1 opacity-70"></p>
    </div>
    <div class="grid grid-cols-2 gap-4">
     <div class="fade-in">
      <div class="placeholder-frame aspect-square">
       <img data-template-id="l01-photo-1" class="canva-image w-full h-full object-cover rounded-lg" loading="lazy"><span class="absolute text-xs text-gray-500 font-bold pointer-events-none">📷 PHOTO</span>
      </div>
      <p data-template-id="l01-caption-1" class="canva-text text-xs text-center mt-1 opacity-70"></p>
     </div>
     <div class="fade-in">
      <div class="placeholder-frame aspect-square">
       <img data-template-id="l01-photo-2" class="canva-image w-full h-full object-cover rounded-lg" loading="lazy"><span class="absolute text-xs text-gray-500 font-bold pointer-events-none">📷 PHOTO</span>
      </div>
      <p data-template-id="l01-caption-2" class="canva-text text-xs text-center mt-1 opacity-70"></p>
     </div>
     <div class="fade-in">
      <div class="placeholder-frame aspect-square">
       <img data-template-id="l01-photo-3" class="canva-image w-full h-full object-cover rounded-lg" loading="lazy"><span class="absolute text-xs text-gray-500 font-bold pointer-events-none">📷 PHOTO</span>
      </div>
      <p data-template-id="l01-caption-3" class="canva-text text-xs text-center mt-1 opacity-70"></p>
     </div>
     <div class="fade-in">
      <div class="placeholder-frame aspect-square">
       <img data-template-id="l01-photo-4" class="canva-image w-full h-full object-cover rounded-lg" loading="lazy"><span class="absolute text-xs text-gray-500 font-bold pointer-events-none">📷 PHOTO</span>
      </div>
      <p data-template-id="l01-caption-4" class="canva-text text-xs text-center mt-1 opacity-70"></p>
     </div>
     <div class="fade-in">
      <div class="placeholder-frame aspect-square">
       <img data-template-id="l01-photo-5" class="canva-image w-full h-full object-cover rounded-lg" loading="lazy"><span class="absolute text-xs text-gray-500 font-bold pointer-events-none">📷 PHOTO</span>
      </div>
      <p data-template-id="l01-caption-5" class="canva-text text-xs text-center mt-1 opacity-70"></p>
     </div>
     <div class="fade-in">
      <div class="placeholder-frame aspect-square">
       <img data-template-id="l01-photo-6" class="canva-image w-full h-full object-cover rounded-lg" loading="lazy"><span class="absolute text-xs text-gray-500 font-bold pointer-events-none">📷 PHOTO</span>
      </div>
      <p data-template-id="l01-caption-6" class="canva-text text-xs text-center mt-1 opacity-70"></p>
     </div>
    </div>
   </div>
  </section><!-- ===== LEVEL 02 ===== -->
  <section id="level-02" class="w-full py-12 px-4" style="background: linear-gradient(180deg, #FFF8E1, #FFECB3);">
   <div class="max-w-lg mx-auto">
    <div class="fade-in text-center mb-8">
     <div class="checkpoint-bar w-full mb-4"></div>
     <h2 data-template-id="level02-title" class="canva-text font-game text-2xl md:text-3xl"></h2>
    </div>
    <div class="space-y-4">
     <div class="fade-in achievement-card p-4 flex gap-3 items-center">
      <div class="placeholder-frame w-20 h-20 flex-shrink-0">
       <img data-template-id="l02-photo-1" class="canva-image w-full h-full object-cover rounded-lg" loading="lazy">
      </div>
      <div>
       <p data-template-id="l02-achieve-1" class="canva-text font-game text-sm"></p>
       <p data-template-id="l02-xp-1" class="canva-text text-xs opacity-60 mt-1"></p>
      </div>
     </div>
     <div class="fade-in achievement-card p-4 flex gap-3 items-center">
      <div class="placeholder-frame w-20 h-20 flex-shrink-0">
       <img data-template-id="l02-photo-2" class="canva-image w-full h-full object-cover rounded-lg" loading="lazy">
      </div>
      <div>
       <p data-template-id="l02-achieve-2" class="canva-text font-game text-sm"></p>
       <p data-template-id="l02-xp-2" class="canva-text text-xs opacity-60 mt-1"></p>
      </div>
     </div>
     <div class="fade-in achievement-card p-4 flex gap-3 items-center">
      <div class="placeholder-frame w-20 h-20 flex-shrink-0">
       <img data-template-id="l02-photo-3" class="canva-image w-full h-full object-cover rounded-lg" loading="lazy">
      </div>
      <div>
       <p data-template-id="l02-achieve-3" class="canva-text font-game text-sm"></p>
       <p data-template-id="l02-xp-3" class="canva-text text-xs opacity-60 mt-1"></p>
      </div>
     </div>
     <div class="fade-in achievement-card p-4 flex gap-3 items-center">
      <div class="placeholder-frame w-20 h-20 flex-shrink-0">
       <img data-template-id="l02-photo-4" class="canva-image w-full h-full object-cover rounded-lg" loading="lazy">
      </div>
      <div>
       <p data-template-id="l02-achieve-4" class="canva-text font-game text-sm"></p>
       <p data-template-id="l02-xp-4" class="canva-text text-xs opacity-60 mt-1"></p>
      </div>
     </div>
     <div class="fade-in achievement-card p-4 flex gap-3 items-center">
      <div class="placeholder-frame w-20 h-20 flex-shrink-0">
       <img data-template-id="l02-photo-5" class="canva-image w-full h-full object-cover rounded-lg" loading="lazy">
      </div>
      <div>
       <p data-template-id="l02-achieve-5" class="canva-text font-game text-sm"></p>
       <p data-template-id="l02-xp-5" class="canva-text text-xs opacity-60 mt-1"></p>
      </div>
     </div>
    </div>
   </div>
  </section><!-- ===== LEVEL 03 — VIDEO ===== -->
  <section id="level-03" class="w-full py-12 px-4" style="background: linear-gradient(180deg, #263238, #37474F);">
   <div class="max-w-lg mx-auto">
    <div class="fade-in text-center mb-8">
     <div class="checkpoint-bar w-full mb-4"></div>
     <h2 data-template-id="level03-title" class="canva-text font-game text-2xl md:text-3xl text-white"></h2>
     <p data-template-id="level03-subtitle" class="canva-text text-sm text-white/60 mt-1"></p>
    </div>
    <div class="space-y-6">
     <div class="fade-in video-placeholder flex flex-col items-center justify-center p-6 text-center"><img data-template-id="l03-video-1" class="canva-image w-full h-48 object-cover rounded-lg" loading="lazy">
      <p data-template-id="l03-video-label-1" class="canva-text font-game text-white text-lg mt-3"></p>
     </div>
     <div class="fade-in video-placeholder flex flex-col items-center justify-center p-6 text-center"><img data-template-id="l03-video-2" class="canva-image w-full h-48 object-cover rounded-lg" loading="lazy">
      <p data-template-id="l03-video-label-2" class="canva-text font-game text-white text-lg mt-3"></p>
     </div>
     <div class="fade-in video-placeholder flex flex-col items-center justify-center p-6 text-center"><img data-template-id="l03-video-3" class="canva-image w-full h-48 object-cover rounded-lg" loading="lazy">
      <p data-template-id="l03-video-label-3" class="canva-text font-game text-white text-lg mt-3"></p>
     </div>
    </div>
   </div>
  </section><!-- ===== LEVEL 04 — BEST MOMENTS ===== -->
  <section id="level-04" class="w-full py-12 px-4" style="background: linear-gradient(180deg, #E3F2FD, #BBDEFB);">
   <div class="max-w-lg mx-auto">
    <div class="fade-in text-center mb-8">
     <div class="checkpoint-bar w-full mb-4"></div>
     <h2 data-template-id="level04-title" class="canva-text font-game text-2xl md:text-3xl"></h2>
    </div>
    <div class="grid grid-cols-3 gap-3">
     <div class="fade-in achievement-card p-2 text-center">
      <div class="placeholder-frame aspect-square mb-1">
       <img data-template-id="l04-photo-1" class="canva-image w-full h-full object-cover rounded" loading="lazy">
      </div>
      <p data-template-id="l04-cap-1" class="canva-text text-xs"></p>
     </div>
     <div class="fade-in achievement-card p-2 text-center">
      <div class="placeholder-frame aspect-square mb-1">
       <img data-template-id="l04-photo-2" class="canva-image w-full h-full object-cover rounded" loading="lazy">
      </div>
      <p data-template-id="l04-cap-2" class="canva-text text-xs"></p>
     </div>
     <div class="fade-in achievement-card p-2 text-center">
      <div class="placeholder-frame aspect-square mb-1">
       <img data-template-id="l04-photo-3" class="canva-image w-full h-full object-cover rounded" loading="lazy">
      </div>
      <p data-template-id="l04-cap-3" class="canva-text text-xs"></p>
     </div>
     <div class="fade-in achievement-card p-2 text-center">
      <div class="placeholder-frame aspect-square mb-1">
       <img data-template-id="l04-photo-4" class="canva-image w-full h-full object-cover rounded" loading="lazy">
      </div>
      <p data-template-id="l04-cap-4" class="canva-text text-xs"></p>
     </div>
     <div class="fade-in achievement-card p-2 text-center">
      <div class="placeholder-frame aspect-square mb-1">
       <img data-template-id="l04-photo-5" class="canva-image w-full h-full object-cover rounded" loading="lazy">
      </div>
      <p data-template-id="l04-cap-5" class="canva-text text-xs"></p>
     </div>
     <div class="fade-in achievement-card p-2 text-center">
      <div class="placeholder-frame aspect-square mb-1">
       <img data-template-id="l04-photo-6" class="canva-image w-full h-full object-cover rounded" loading="lazy">
      </div>
      <p data-template-id="l04-cap-6" class="canva-text text-xs"></p>
     </div>
     <div class="fade-in achievement-card p-2 text-center">
      <div class="placeholder-frame aspect-square mb-1">
       <img data-template-id="l04-photo-7" class="canva-image w-full h-full object-cover rounded" loading="lazy">
      </div>
      <p data-template-id="l04-cap-7" class="canva-text text-xs"></p>
     </div>
     <div class="fade-in achievement-card p-2 text-center">
      <div class="placeholder-frame aspect-square mb-1">
       <img data-template-id="l04-photo-8" class="canva-image w-full h-full object-cover rounded" loading="lazy">
      </div>
      <p data-template-id="l04-cap-8" class="canva-text text-xs"></p>
     </div>
     <div class="fade-in achievement-card p-2 text-center">
      <div class="placeholder-frame aspect-square mb-1">
       <img data-template-id="l04-photo-9" class="canva-image w-full h-full object-cover rounded" loading="lazy">
      </div>
      <p data-template-id="l04-cap-9" class="canva-text text-xs"></p>
     </div>
    </div>
   </div>
  </section><!-- ===== LEVEL 05 — QUIZ ===== -->
  <section id="level-05" class="w-full py-12 px-4" style="background: linear-gradient(180deg, #F3E5F5, #CE93D8);">
   <div class="max-w-lg mx-auto">
    <div class="fade-in text-center mb-6">
     <div class="checkpoint-bar w-full mb-4"></div>
     <h2 data-template-id="level05-title" class="canva-text font-game text-2xl md:text-3xl"></h2>
     <p data-template-id="level05-subtitle" class="canva-text text-sm mt-1 opacity-70"></p>
    </div><!-- Score -->
    <div class="fade-in flex justify-between items-center mb-4 bg-white/60 rounded-full px-4 py-2"><span class="font-game text-sm">🏁 XP: <span id="quiz-score">0</span></span> <span class="font-game text-sm">Q: <span id="quiz-progress">1</span>/5</span>
    </div><!-- Quiz container -->
    <div id="quiz-container"><!-- Q1 -->
     <div class="quiz-slide fade-in" data-correct="1">
      <p data-template-id="q1-question" class="canva-text font-bold text-lg mb-3 text-center"></p>
      <div class="space-y-2"><button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="0"><span data-template-id="q1-a" class="canva-text"></span></button> <button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="1"><span data-template-id="q1-b" class="canva-text"></span></button> <button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="2"><span data-template-id="q1-c" class="canva-text"></span></button>
      </div>
     </div><!-- Q2 -->
     <div class="quiz-slide fade-in hidden" data-correct="0">
      <p data-template-id="q2-question" class="canva-text font-bold text-lg mb-3 text-center"></p>
      <div class="space-y-2"><button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="0"><span data-template-id="q2-a" class="canva-text"></span></button> <button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="1"><span data-template-id="q2-b" class="canva-text"></span></button> <button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="2"><span data-template-id="q2-c" class="canva-text"></span></button>
      </div>
     </div><!-- Q3 -->
     <div class="quiz-slide fade-in hidden" data-correct="2">
      <p data-template-id="q3-question" class="canva-text font-bold text-lg mb-3 text-center"></p>
      <div class="space-y-2"><button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="0"><span data-template-id="q3-a" class="canva-text"></span></button> <button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="1"><span data-template-id="q3-b" class="canva-text"></span></button> <button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="2"><span data-template-id="q3-c" class="canva-text"></span></button>
      </div>
     </div><!-- Q4 -->
     <div class="quiz-slide fade-in hidden" data-correct="1">
      <p data-template-id="q4-question" class="canva-text font-bold text-lg mb-3 text-center"></p>
      <div class="space-y-2"><button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="0"><span data-template-id="q4-a" class="canva-text"></span></button> <button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="1"><span data-template-id="q4-b" class="canva-text"></span></button> <button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="2"><span data-template-id="q4-c" class="canva-text"></span></button>
      </div>
     </div><!-- Q5 -->
     <div class="quiz-slide fade-in hidden" data-correct="0">
      <p data-template-id="q5-question" class="canva-text font-bold text-lg mb-3 text-center"></p>
      <div class="space-y-2"><button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="0"><span data-template-id="q5-a" class="canva-text"></span></button> <button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="1"><span data-template-id="q5-b" class="canva-text"></span></button> <button class="quiz-option w-full text-left px-4 py-3 rounded-xl bg-white shadow" data-idx="2"><span data-template-id="q5-c" class="canva-text"></span></button>
      </div>
     </div><!-- Result -->
     <div id="quiz-result" class="hidden text-center py-8">
      <p class="font-game text-3xl">🏆</p>
      <p data-template-id="quiz-result-text" class="canva-text font-game text-xl mt-2"></p>
     </div>
    </div>
   </div>
  </section><!-- ===== FINAL CHECKPOINT — MESSAGE ===== -->
  <section id="message-section" class="w-full py-12 px-4" style="background: linear-gradient(180deg, #FBE9E7, #FFCCBC);">
   <div class="max-w-lg mx-auto text-center">
    <div class="fade-in mb-6">
     <h2 data-template-id="message-title" class="canva-text font-game text-2xl md:text-3xl"></h2>
    </div>
    <div class="fade-in placeholder-frame mx-auto mb-6" style="max-width: 280px; aspect-ratio: 3/4;"><img data-template-id="message-photo" class="canva-image w-full h-full object-cover rounded-xl" loading="lazy"> <span class="absolute text-xs text-gray-500 font-bold pointer-events-none">📷 YOUR PHOTO</span>
    </div>
    <div class="fade-in bg-white/80 rounded-2xl p-6 shadow-lg">
     <p data-template-id="personal-message" class="canva-text font-handwritten text-xl leading-relaxed"></p>
    </div>
   </div>
  </section><!-- ===== FINISH LINE ===== -->
  <section id="finish" class="w-full py-16 px-4 text-center" style="background: linear-gradient(180deg, #1B5E20, #2E7D32);">
   <div class="max-w-lg mx-auto">
    <div class="fade-in">
     <p class="text-6xl mb-4">🏁</p>
     <h2 data-template-id="finish-title" class="canva-text font-game text-3xl md:text-4xl text-white mb-2"></h2>
     <p data-template-id="finish-subtitle" class="canva-text text-white/90 text-lg mb-2"></p>
     <p data-template-id="finish-rakhi" class="canva-text font-game text-xl text-yellow-300"></p>
    </div>
    <div class="fade-in placeholder-frame mx-auto mt-8" style="max-width: 300px; aspect-ratio: 4/3;"><img data-template-id="finish-photo" class="canva-image w-full h-full object-cover rounded-xl" loading="lazy"> <span class="absolute text-xs text-gray-500 font-bold pointer-events-none">📷 FINAL PHOTO</span>
    </div>
   </div>
  </section>
  <script src="/_sdk/f344579cd2b2cf70.editing_sdk.js" integrity="sha512-bzdgmfJ/pl/acJqgk+LGvYwJbF03Y2d6f4oZHD96WjqTnvQUZBGVAQkTDRz+fyIMjVc+AXkpwFXqDYLeHDMLSw=="></script>
  <script>
    // Scroll fade-in
    const observer = new IntersectionObserver((entries) => {
        entries.forEach(e => { if (e.isIntersecting) e.target.classList.add('visible'); });
    }, { threshold: 0.15 });
    document.querySelectorAll('.fade-in').forEach(el => observer.observe(el));

    // Quiz logic
    (function() {
        const slides = document.querySelectorAll('.quiz-slide');
        let current = 0, score = 0;
        document.getElementById('quiz-container').addEventListener('click', (e) => {
            const btn = e.target.closest('.quiz-option');
            if (!btn || btn.classList.contains('correct') || btn.classList.contains('wrong')) return;
            const slide = slides[current];
            const correct = parseInt(slide.dataset.correct);
            const idx = parseInt(btn.dataset.idx);
            // Disable all in this slide
            slide.querySelectorAll('.quiz-option').forEach(b => {
                b.style.pointerEvents = 'none';
                if (parseInt(b.dataset.idx) === correct) b.classList.add('correct');
            });
            if (idx === correct) {
                score += 100;
                document.getElementById('quiz-score').textContent = score;
            } else {
                btn.classList.add('wrong');
            }
            // Next after delay
            setTimeout(() => {
                slide.classList.add('hidden');
                current++;
                if (current < slides.length) {
                    slides[current].classList.remove('hidden');
                    document.getElementById('quiz-progress').textContent = current + 1;
                } else {
                    document.getElementById('quiz-result').classList.remove('hidden');
                    document.getElementById('quiz-result').querySelector('[data-template-id="quiz-result-text"]').textContent = 'You scored ' + score + ' XP! 🎉';
                }
            }, 1000);
        });
    })();

    lucide.createIcons();
</script>
 </body>
</html>
