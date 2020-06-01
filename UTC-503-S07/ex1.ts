let format_message = from => to => message => console.log ("From: " + from + ", To: " + to + " Msg: " + message);

   
let colonLogger = format_message("Alex");
let my_logger = colonLogger("Bertrand");
my_logger("Salut");
