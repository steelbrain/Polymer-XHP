<?hh //strict
class :core-animation extends :polymer-xhp{
  protected string $tagName = 'core-animation';
  attribute
    Stringish target,
    Stringish keyframes,
    Stringish customEffect,
    enum {'replace', 'add', 'accumulate'} composite,
    Stringish duration,
    enum {'none', 'forwards', 'backwards', 'both', 'auto'} fill,
    Stringish easing,
    int delay,
    int endDelay,
    Stringish iterations,
    int iterationStart,
    enum {'replace', 'accumulate'} iterationComposite,
    enum {'normal', 'reverse', 'alternate', 'alternate-reverse'} direction,
    int playbackRate,
    bool autoplay;
  children (:core-animation-keyframe)*;
  category %flow;
}