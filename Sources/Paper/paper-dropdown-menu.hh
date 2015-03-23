<?hh //strict
class :paper-dropdown-menu extends :core-dropdown-base{
  protected string $tagName = 'paper-dropdown-menu';
  attribute
    Stringish label,
    Stringish openedIcon,
    Stringish closedIcon;
}