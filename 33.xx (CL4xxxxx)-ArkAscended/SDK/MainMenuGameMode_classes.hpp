#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x668 - 0x658)
// BlueprintGeneratedClass MainMenuGameMode.MainMenuGameMode_C
class AMainMenuGameMode_C : public AShooterGame_Menu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x658(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x660(0x8)(Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst)

	static class UClass* StaticClass();
	static class AMainMenuGameMode_C* GetDefaultObj();

	int32 ExecuteUbergraph_MainMenuGameMode();
};

}


