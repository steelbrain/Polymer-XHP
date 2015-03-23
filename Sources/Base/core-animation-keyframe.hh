<?hh //strict
class :core-animation-keyframe extends :polymer-xhp{
  protected string $tagName = 'core-animation-keyframe';
  attribute int offset;
  children (:core-animation-prop)*;
  category %flow;
}