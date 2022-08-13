#pragma once
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <math.h>
#include <random>

using namespace std;

class SocialInteraction
{
public:

	SocialInteraction();
	string Greeting[10] = { "Hi", "Hey", "G'Day, Mate!", "Sup", "Hello", "Hey man!", "Good morning", "Hey buddy!", "Yo!", "Hiya"};
	string Goodbye[10] = { "Goodbye", "See Ya Later", "I'll be Back", "Peace", "I’ve got to get going", "I look forward to our next meeting", "It was nice to see you again", "I must be going", "Talk to you later", "See you soon"};
	string LightSarcasm[3] = { "As if", "Whatever", "Give me a break" };
	string HeavySarcasm[4] = { "Buzz off", "Go Away", "Leave me alone", "idiot", };
	string ResponseWhileAttacking[9];
	string ResponseWhileDodging[9];
	string ResponseWhileMoving[9];
	string NameQuestions[9] = {"What's your name ?", "May I have your name?", "May I get your name?", "where are you from ?", "What is your surname ?", "What is your family name ?", "", "", ""};
	string NormalQuestions[4][9] = {
							{"How's everything ?", "How's it going ?", "How are things ?", "What's up ?", "How are you doing ?", "What's new ?", "You all right ?", "How have you been ?", "How are things going ?"},
							{"Are you well ?", "What's going on ?", "How are you feeling ?", "What are you up to ?", "What's sizzling ?", "How do you do ?", "Howdy!", "What's good in the hood ?", "Long time no see!"},
							{"What's new with you ?", "How long has it been ?", "Must be tough, huh ?", "Sup ?", "Anything interesting happening in your life lately ?", "What is happening ?", "What are you heading ?", "How is life sailing ?", "How are you holding up ?"},
							{"What's with the face ?", "What's up with the flow ?", "How's it rolling ?", "How do you fare ?", "How's everything little thing in your life ?", "What have you been doing since we last talked ?", "How was your day ?", "What was the highlight of your day, so far ?", "How are things coming along ?"}
							//{"How's everything coming together ?", "Is there anything concerning you ?", "What's the latest buzz in your world ?", "What's shakin' ?"},
	};
	string Answers1[3][9]= {
							{"Somewhere between better and best.", "Can't complain. . . . I have tried, but no one listens.", "If I had a tail, I would wag it!(Wriggle hips)", "I am as happy as a tick on a big, fat doggy.", "Oh, stop it, will you ?", "Physically ? Mentally ? Spiritually ? Financially ? Socioeconomically ? I am not sure what you mean.", "Wondering how you are. . . . ", "At minding my own business ? So much better than most people.", "So much better now that you are with me." },
							{"If I was any finer, I would be China.", "I am better on the inside than I look on the outside.", "Better than I was a minute ago because you are here now.", "Great, because my name wasn't in today's obituaries.", "Hopefully, not as good as I will ever be.", "Things could be worse  I could be you!", "Not bad.Could be better, though.Could be payday.", "I am planning on taking over the world.", "I am still sucking. . . . air, that is." },
							{"Doing fairly well, unless you have some contagious disease and are about to infect me.", "Better than most, but maybe not as well as others.", "I still have a pulse, so I must be doing good.", "I am feeling blessed!", "I am doing a bit better than before, but not nearly as awesome as I am going to be.", "My psychiatrist says that I shouldn't discuss it with strangers.", "I don't know. Is it Friday yet?", "If I was any better, vitamins would be taking me.", "I would be better if you asked me out." },
							//{"Surviving, I guess.","Not as good as you.","Holy crap, you can see me?! I died last week, since then. . . . ","Next question, please.","Trust me, you do not want to know.","On a scale of one to punching someone in the face, I am at 7.5.","I am sober!","Under renovation."}
};
	string Answers2[3][9] = { 
							{"Medium-well.","Don't ask it's too early to tell.","Each day is better than the next.","Alright so far, but there is plenty of time for things to get bad.","I can't really complain, but I will still try.","I am doing well. . . . or that could be my anti-depressants speaking.","I don't feel that great, but look! At least my hair looks amazing.","I think I am doing alright. How do you think that I am doing?","Much better than I deserve."},
							{"I am feeling so good that I have to sit on my hands to stop myself from clapping.","The best I can be. I hope you are at your best too.","Living an amazing dream. Don't wake me up yet. You may join me, though. There is plenty of room.","What an impertinent question to ask a girl! Hmmph.","Getting better with every passing second.","Still in bed? (over the phone)","Great, but I should warn you that I am totally biased.","Everything is fine when you are around.","Incredibly good looking."},
							{"What's with all these questions? You a cop?","Oh, terrible, thank you so much!","Stellar, great, fantastic  but dead inside.","Well, I have got this strange itch on my right butt cheek. . . . ","Groovy!","Living a life of suppressed rage, emotional imbalance, and denial.","Fair to partly cloudy.","Slowly but surely dying.","To answer that question, I need to take you back about 12 years. Do you have a minute?"},
	};

	string Answers3[3][9] = { 
							{"The doctor said I would live.","I am high-quality, 100% plant-fed.","You are looking at it, baby.","Dangerously close to being fabulous.","Not quite there yet.","Living the dream! But half the time, it is a nightmare.","I am not so sure yet.","You go first. Then, we can compare.","As compared to what?"},
							{"Not today, Satan!","Hunting dinosaurs. You?","Dying. Thanks.","WHY!? WHAT DID THEY SAY?","How much are you willing you pay me if I tell you?","Your attempt at social interaction to be polite is hereby acknowledged.","[*speaks gibberish*]","Rolling with the punches.","I had promised myself I would murder the next person who asked me that question. What should I do. . . . I like you too much."},
							{"Do you want the short or the detailed version?","It's a secret.","I will leave that up to your imagination.","Happy, and I know it. [claps their hands]","Good question. (Walks away)","[just stares for a minute]","How do you think I am?","Wondering how YOU are. . . . ","I am really just trying hard to avoid ambiguous questions at this moment."},
	};
	

private:


protected:



	//Functions
public:
	virtual void SetInteractionForNormalQuestions(int ArrayOne, int ArrayTwo);
	virtual void SetInteractionForAnswers(int ArrayOne, int ArrayTwo);
	virtual void SetInteractionForGreetings();
	virtual void SetInteractionForGoodbyes();
};


