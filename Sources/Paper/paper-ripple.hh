<?hh //strict
class :paper-ripple extends :polymer-xhp{
  protected string $tagName = 'paper-ripple';
  attribute
    int initialOpacity,
    int opacityDecayVelocity;
}