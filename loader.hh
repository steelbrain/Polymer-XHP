<?hh //strict
spl_autoload_register(function($Name){
  if(strlen($Name) > 3 && substr($Name, 0, 3) !== 'xhp'){
    return ;
  } else if($Name === 'xhp_polymer_xhp'){
    require_once(__DIR__.'/Sources/Paper/polymer-xhp.hh');
    return ;
  }
  $Chunks = explode('_', $Name);
  if($Chunks[1] === 'core'){
    $Path = __DIR__.'/Sources/Core/core-'.$Chunks[2].'.hh';
  } else if($Chunks[1] === 'paper'){
    $Path = __DIR__.'/Sources/Paper/paper-'.$Chunks[2].'.hh';
  } else {
    return false;
  }
  if(file_exists($Path)){
    require_once($Path);
  }
  file_put_contents("/tmp/test", $Path."\n", FILE_APPEND);
});