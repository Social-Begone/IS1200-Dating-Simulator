#include <stdint.h>
#include "sample.h"
#include "input.h"

/*
threelines_and_menu(
""
""
""
);
fourlines(
""
""
""
""
);
*/

//Start

int nextconv = 0;
int currentbtn = 4;
int currentstage = 1;

void story (int nextconv, int currentbtn, int currentstage) {
  if(nextconv == 1){
    if(currentbtn == 2){
      if(currentstage == 1){
        fourlines(
        "I wouldn't mind",
        "being stuck with",
        "you if you are",
        "good with math."
        );
      }
      if(currentstage == 2){
        fourlines(
          "Hmmm, maybe we",
          "can study after",
          "class? Two is",
          "better than one."
          );
      }
      if(currentstage == 3){
        fourlines(
        "Right, maybe.",
        "Let's head into",
        "class.",
        ""
        );
      }
      if(currentstage == 4){
        fourlines(
        "Hell yeah! This",
        "is going to be a",
        "great studying",
        "session!"
        );
      }
      if(currentstage == 5){
        fourlines(
        "I wouldn't mind",
        "spending more",
        "time with you.",
        "what do you say?"
        );
      }
      if(currentstage == 6){

      }
    }
    if(currentbtn == 3){
      if(currentstage == 1){
        fourlines(
        "Yeah lets sit",
        "together!",
        "Are you any good",
        "with math?"
        );
      }
      if(currentstage == 2){
        fourlines(
          "I feel behind on",
          "math in general",
          "maybe we can do",
          "a study group?"
          );
      }
      if(currentstage == 3){
        fourlines(
        "Come on! Let's",
        "sit together in",
        "class!",
        ""
        );
      }
      if(currentstage == 4){
        fourlines(
        "Mmmmmmm",
        "I'd always study",
        "if I got to meet",
        "you."
        );
      }
      if(currentstage == 5){
        fourlines(
        "Maybe we could",
        "figure something",
        "out, what do you",
        "say?"
        );
      }
      if(currentstage == 6){

      }
    }
    if(currentbtn == 4){
      if(currentstage == 1){
        fourlines(
        "Right, tell me.",
        "Are you any good",
        "with math?",
        ""
        );
      }
      if(currentstage == 2){
        fourlines(
        "I feel the same.",
        "We should totaly",
        "study together",
        "after class!"
        );
      }
      if(currentstage == 3){
        fourlines(
        "For sure! Come",
        "our lesson is",
        "about to start!",
        ""
        );
      }
      if(currentstage == 4){
        fourlines(
"You're right.",
"let's get on",
"with the work.",
""
);
      }
      if(currentstage == 5){
        fourlines(
        "Don't you want",
        "to do something",
        "else later",
        "this evening?"
        );
      }
      if(currentstage == 6){

      }
    }
  }

if(nextconv == 0){
  if(currentbtn == 2){
    if(currentstage == 1){
      threelines_and_menu(
      "Yeah, I guess",
      "we'll be stuck",
      "together."
      );
    }
    if(currentstage == 2){
      threelines_and_menu(
        "Well, I am kinda",
        "getting the hang",
        "of it."
        );
    }
    if(currentstage == 3){
      threelines_and_menu(
      "Maybe we'll",
      "start one",
      "someday."
      );
    }
    if(currentstage == 4){
      threelines_and_menu(
      "Let's study like",
      "never before!",
      ""
      );
    }
    if(currentstage == 5){
      threelines_and_menu(
        "If you are free",
        "we could hang",
        "some more."
        );
    }
    if(currentstage == 6){
      threelines_and_menu(
      "We should def.",
      "do something",
      "tonight!"
      );
    }
  }
  if(currentbtn == 3){
    if(currentstage == 1){
      threelines_and_menu(
      "I am! Wanna grab",
      "a seat in the",
      "classroom?"
      );
    }
    if(currentstage == 2){
      threelines_and_menu(
"I mean, I am ok",
"at it i guess.",
""
);
    }
    if(currentstage == 3){
      threelines_and_menu(
      "I won't survive",
      "this course any",
      "other way."
      );
    }
    if(currentstage == 4){
      threelines_and_menu(
      "I am ready now",
      "that I am with",
      "you."
      );
    }
    if(currentstage == 5){
      threelines_and_menu(
      "Nothing planned",
      "I'd love to do",
      "something though"
      );
    }
    if(currentstage == 6){
      threelines_and_menu(
      "Nah maybe",
      "not sure.",
      ""
      );
    }
  }
  if(currentbtn == 4){
    if(currentstage == 1){
      threelines_and_menu(
      "Hi, yeah I will",
      "be reading this",
      "course."
      );
    }
    if(currentstage == 2){
      threelines_and_menu(
        "Maybe with you",
        "around I'll get",
        "the hang of it."
        );
    }
    if(currentstage == 3){
      threelines_and_menu(
      "Together we will",
      "ace the course",
      "for sure!"
      );
    }
    if(currentstage == 4){
      threelines_and_menu(
       "Let's just dish",
       "this days class",
       "off"
       );
    }
    if(currentstage == 5){
      threelines_and_menu(
      "I don't know, I",
      "might go home,",
      "watch a movie."
      );
    }
    if(currentstage == 6){
      threelines_and_menu(
      "I'd love to!",
      "",
      ""
      );
    }
  }
}
}

void selectbtn(int shift){
  shift = (shift * 28) + 5;
  set_pixel(shift,27);
  set_pixel(shift,28);
  set_pixel(shift,29);
  set_pixel(shift + 1,27);
  set_pixel(shift + 1,28);
  set_pixel(shift + 1,29);
  set_pixel(shift + 2,27);
  set_pixel(shift + 2,28);
  set_pixel(shift + 2,29);

}

void option_screen(void){
  if(getbtns() == 1){
    nextconv = 1;
  }
  if(getbtns() == 2){
    if(nextconv == 1){
      currentstage++;
    }
    nextconv = 0;
    currentbtn = 2;
  }
  if(getbtns() == 4){
    if(nextconv == 1){
      currentstage++;
    }
    nextconv = 0;
    currentbtn = 3;
  }
  if(getbtns() == 8){
    if(nextconv == 1){
      currentstage++;
    }
    nextconv = 0;
    currentbtn = 4;
  }

  buffer_clear();

  if(nextconv == 1){
    story (nextconv, currentbtn, currentstage);
  }
  else{
  if(currentbtn == 2){
    story (nextconv, currentbtn, currentstage);
    selectbtn(2);
  }
  if(currentbtn == 3){
    story (nextconv, currentbtn, currentstage);
    selectbtn(1);
  }
  if(currentbtn == 4){
    story (nextconv, currentbtn, currentstage);
    selectbtn(0);
  }
}
}



/*
void story (int nextconv, int currentbtn, int currentstage) {
  fourlines(
  "Oh, Hello!",
  "Are you starting",
  "this math course",
  "as well?"
  );


  threelines_and_menu(
  "Yeah, I guess",
  "we'll be stuck",
  "together."
  );
  fourlines(
  "I wouldn't mind",
  "being stuck with",
  "you if you are",
  "good with math."
  );


  threelines_and_menu(
  "I am! Wanna grab",
  "a seat in the",
  "classroom?"
  );
  fourlines(
  "Yeah lets sit",
  "together!",
  "Are you any good",
  "with math?"
  );


  threelines_and_menu(
  "Hi, yeah I will",
  "be reading this",
  "course."
  );
  fourlines(
  "Right, tell me.",
  "Are you any good",
  "with math?",
  ""
  );

  //next response

  threelines_and_menu(
  "Well, I am kinda",
  "getting the hang",
  "of it."
  );
  fourlines(
  "Hmmm, maybe we",
  "can study after",
  "class? Two is",
  "better than one."
  );


  threelines_and_menu(
  "I mean, I am ok",
  "at it i guess.",
  ""
  );
  fourlines(
  "I feel behind on",
  "math in general",
  "maybe we can do",
  "a study group?"
  );


  threelines_and_menu(
  "Maybe with you",
  "around I'll get",
  "the hang of it."
  );
  fourlines(
  "I feel the same.",
  "We should totaly",
  "study together",
  "after class!"
  );

  //next response

  threelines_and_menu(
  "Maybe we'll",
  "start one",
  "someday."
  );
  fourlines(
  "Right, maybe.",
  "Let's head into",
  "class.",
  ""
  );

  threelines_and_menu(
  "I won't survive",
  "this course any",
  "other way."
  );
  fourlines(
  "Come on! Let's",
  "sit together in",
  "class!",
  ""
  );

  threelines_and_menu(
  "Together we will",
  "ace the course",
  "for sure!"
  );
  fourlines(
  "For sure! Come",
  "our lesson is",
  "about to start!",
  ""
  );

  //monologue1

  fourlines(
  "\"Meet me at the",
  "cafe once you're",
  "finished today.\"",
  ""
  );
  fourlines(
  "The day flies by",
  "as you attend",
  "classes filled",
  "with knowledge."
  );
  fourlines(
  "As you finish",
  "your last lesson",
  "for the day you",
  "remember..."
  );
  fourlines(
  "You are late to",
  "the cafe! So",
  "you hurry out",
  "the building..."
  );

  //Minigame

  fourlines(
  "Hi, you!",
  "Ready to get",
  "started?",
  ""
  );



  threelines_and_menu(
  "Let's study like",
  "never before!",
  ""
  );
  fourlines(
  "Hell yeah! This",
  "is going to be a",
  "great studying",
  "session!"
  );


  threelines_and_menu(
  "I am ready now",
  "that I am with",
  "you."
  );
  fourlines(
  "Mmmmmmm",
  "I'd always study",
  "if I got to meet",
  "you."
  );


  threelines_and_menu(
  "Let's just dish",
  "this days class",
  "off"
  );
  fourlines(
  "You're right.",
  "let's get on",
  "with the work.",
  ""
  );

  //monologue2

  fourlines(
  "Both of you sit",
  "and run through",
  "the papers.",
  ""
  );
  fourlines(
  "Answering the",
  "questions while",
  "the cafe buzz",
  "around you two."
  );
  fourlines(
  "You sit and work",
  "in full focus",
  "when you realize",
  "the time..."
  );

  //Dialogue

  fourlines(
  "It is getting",
  "late, what are",
  "you doing later",
  "this evening?"
  );



  threelines_and_menu(
  "If you are free",
  "we could hang",
  "some more."
  );
  fourlines(
  "I wouldn't mind",
  "spending more",
  "time with you.",
  "what do you say?"
  );

  threelines_and_menu(
  "Nothing planned",
  "I'd love to do",
  "something though"
  );
  fourlines(
  "Maybe we could",
  "figure something",
  "out, what do you",
  "say?"
  );

  threelines_and_menu(
  "I don't know, I",
  "might go home,",
  "watch a movie."
  );
  fourlines(
  "Don't you want",
  "to do something",
  "else later",
  "this evening?"
  );

  //Last Dialogue

  threelines_and_menu(
  "We should def.",
  "do something",
  "tonight!"
  );

  threelines_and_menu(
  "Nah maybe",
  "not sure.",
  ""
  );

  threelines_and_menu(
  "I'd love to!",
  "",
  ""
  );
}
//ENDING
*/