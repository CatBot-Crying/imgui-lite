#include <pthread.h>
#include "Includes/Methods.h"
#include "RGB.h"

extern "C"
JNIEXPORT void JNICALL
Java_uk_lgl_modmenu_MainActivity_setDarkStart(JNIEnv *env, jobject thiz, jobject ctx) {
    CheckFloatingPermison(env, ctx);
}

bool ex = false;
bool ex2 , fuck, test, Diamond, Grenade = false;


extern "C"
JNIEXPORT void JNICALL
Java_uk_lgl_modmenu_FloatingModMenuService_Changes(JNIEnv *env, jobject thiz, jint feature, jint value, jobject ctx) {
    switch (feature) {
		
		
        case 0:
            ex = !ex;
            if (ex){
			    Funçoes(env, ctx, OBFUSCATE("com.vng.g6.a.zombie"), OBFUSCATE("libil2cpp.so"), string2Offset("0x10C8EEC"), OBFUSCATE("E7 03 00 E3 1E FF 2F E1"));
                Toast(env,ctx,OBFUSCATE("ON"),1);
            } else {
				Funçoes(env, ctx, OBFUSCATE("com.vng.g6.a.zombie"), OBFUSCATE("libil2cpp.so"), string2Offset("0x10C8EEC"), OBFUSCATE("70 40 2D E9 9C 50 9F E5"));
                Toast(env,ctx,OBFUSCATE("OFF"),1);
            }
            break;
        case 1:
            ex2 = !ex2;
            if (ex2){
			    Funçoes(env, ctx, OBFUSCATE("com.vng.g6.a.zombie"), OBFUSCATE("libil2cpp.so"), string2Offset(OBFUSCATE("0x1183AD8")), OBFUSCATE("E7 03 00 E3 1E FF 2F E1"));
                } else {
				Funçoes(env, ctx, OBFUSCATE("com.vng.g6.a.zombie"), OBFUSCATE("libil2cpp.so"), string2Offset(OBFUSCATE("0x1183AD8")), OBFUSCATE("10 40 2D E9 F0 40 90 E5"));
            }
            break;
            case 2:
                fuck = !fuck;
                if(fuck){
                  Funçoes(env, ctx, OBFUSCATE("com.vng.g6.a.zombie"), OBFUSCATE("libil2cpp.so"), string2Offset("0x1170A00"), OBFUSCATE("7A 04 44 E3 1E FF 2F E1")); 
                  Toast(env,ctx,OBFUSCATE("ON"),2);
                } else {
                  Funçoes(env, ctx, OBFUSCATE("com.vng.g6.a.zombie"), OBFUSCATE("libil2cpp.so"), string2Offset("0x1170A00"), OBFUSCATE("F0 4F 2D E9 1C D0 4D E2"));
                    Toast(env,ctx,OBFUSCATE("OFF"),2);
                }
              case 3:
                test = !test;
                if(test){
                  Funçoes(env, ctx, OBFUSCATE("com.vng.g6.a.zombie"), OBFUSCATE("libil2cpp.so"), string2Offset("0x117AAF4"), OBFUSCATE("7A 04 44 E3 1E FF 2F E1")); 
                  Toast(env,ctx,OBFUSCATE("ON"),3);
                } else {
                  Funçoes(env, ctx, OBFUSCATE("com.vng.g6.a.zombie"), OBFUSCATE("libil2cpp.so"), string2Offset("0x117AAF4"), OBFUSCATE("F0 47 2D E9 18 D0 4D E2"));
                    Toast(env,ctx,OBFUSCATE("OFF"),3);
                }
                case 4:
                Diamond = !Diamond;
                if(Diamond){
                  Funçoes(env, ctx, OBFUSCATE("com.vng.g6.a.zombie"), OBFUSCATE("libil2cpp.so"), string2Offset("0x1179BE8"), OBFUSCATE("7A 04 44 E3 1E FF 2F E1")); 
                  Toast(env,ctx,OBFUSCATE("ON"),4);
                } else {
                  Funçoes(env, ctx, OBFUSCATE("com.vng.g6.a.zombie"), OBFUSCATE("libil2cpp.so"), string2Offset("0x1179BE8"), OBFUSCATE("F0 47 2D E9 18 D0 4D E2"));
                    Toast(env,ctx,OBFUSCATE("OFF"),4);
                }
                case 5:
                Grenade = !Grenade;
                if(Grenade){
                  Funçoes(env, ctx, OBFUSCATE("com.vng.g6.a.zombie"), OBFUSCATE("libil2cpp.so"), string2Offset("0x11837CC"), OBFUSCATE("7A 04 44 E3 1E FF 2F E1")); 
                  Toast(env,ctx,OBFUSCATE("ON"),5);
                } else {
                  Funçoes(env, ctx, OBFUSCATE("com.vng.g6.a.zombie"), OBFUSCATE("libil2cpp.so"), string2Offset("0x11837CC"), OBFUSCATE("10 40 2D E9 F0 40 90 E5"));
                    Toast(env,ctx,OBFUSCATE("OFF"),5);
                }
    }
}

extern "C"
JNIEXPORT void JNICALL
Java_uk_lgl_modmenu_FloatingModMenuService_StartOptionsDark(JNIEnv *env, jobject thiz, jobject ctx, jobject title, jobject subtitle) {
    setText(env, title, OBFUSCATE("Dark Inject"));
    setText(env, subtitle, OBFUSCATE("メ Tᵘˢᵃʳ"));
	
	
    AddCategory(env, ctx, OBFUSCATE("Menu Example"));
    AddSwich(env, ctx, OBFUSCATE("Unlimited Medikit"), 0);
      AddSwich(env, ctx, OBFUSCATE("Unlimited ammo"), 1);
      AddSwich(env, ctx, OBFUSCATE("Unlimited Money"), 2);
      AddSwich(env, ctx, OBFUSCATE("Unlimited Diamond"), 3);
      AddSwich(env, ctx, OBFUSCATE("Unlimited Gold"), 4);
      AddSwich(env, ctx, OBFUSCATE("Unlimited Grenade"), 5);
      
}
