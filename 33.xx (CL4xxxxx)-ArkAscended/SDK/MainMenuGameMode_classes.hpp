#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x660 - 0x650)
// BlueprintGeneratedClass MainMenuGameMode.MainMenuGameMode_C
class AMainMenuGameMode_C : public AShooterGame_Menu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x650(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x658(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)

	static class UClass* StaticClass();
	static class AMainMenuGameMode_C* GetDefaultObj();

	void ExecuteUbergraph_MainMenuGameMode(int32* EntryPoint);
};

}


