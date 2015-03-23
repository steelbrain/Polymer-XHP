Polymer-XHP
==========
[Polymer][Polymer] Tags as [XHP][XHP] Classes.

### Usage
 Just require the `Loader.hh` file in your app and use the tags anywhere you like.
For example the markup below is __valid__ [XHP][XHP] markup.
```hack
echo
  <paper-dropdown-menu label="Your favorite pastry">
    <paper-dropdown class="dropdown">
      <core-menu class="menu">
        <paper-item>Croissant</paper-item>
        <paper-item>Donut</paper-item>
        <paper-item>Financier</paper-item>
        <paper-item>Madeleine</paper-item>
      </core-menu>
    </paper-dropdown>
  </paper-dropdown-menu>
```

#### Supported Elements:
 - All of Paper Elements
 - Core-Dropdown[-Base]
 - Core-Menu
 - Core-Meta
 - Core-Overlay
 - Core-Range
 - Core-Selector
 - Core-Transition[-CSS]

#### TODO:
 - Create an autoloader (easy)
 - Support all of Core elements (time consuming but easy)

#### License
This project is licensed under the terms of MIT License.

[Polymer]:https://www.polymer-project.org/0.5/docs/start/everything.html
[XHP]:https://github.com/facebook/xhp-lib