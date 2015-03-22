<?hh //strict
class :paper-dropdown-menu extends :core-dropdown-base{
  attribute
    Stringish label,
    Stringish openedIcon,
    Stringish closedIcon;
  attribute
    Stringish core-select;
  protected string $tagName = 'paper-dropdown-menu';
}
