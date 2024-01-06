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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x658(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x660(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst)

	static class UClass* StaticClass();
	static class AMainMenuGameMode_C* GetDefaultObj();

	void ExecuteUbergraph_MainMenuGameMode(int32* EntryPoint);
};

}


