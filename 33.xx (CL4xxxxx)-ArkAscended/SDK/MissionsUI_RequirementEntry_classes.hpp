#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x378 - 0x350)
// WidgetBlueprintGeneratedClass MissionsUI_RequirementEntry.MissionsUI_RequirementEntry_C
class UMissionsUI_RequirementEntry_C : public UMissionRequirementEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UBorder*                               Bullet;                                            // 0x358(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            DisplayTextBlock;                                  // 0x360(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        InnerMainPanel;                                    // 0x368(0x8)(Edit, ConstParm, BlueprintReadOnly, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UBorder*                               MainPanel;                                         // 0x370(0x8)(Edit, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMissionsUI_RequirementEntry_C* GetDefaultObj();

	void Construct();
	bool ExecuteUbergraph_MissionsUI_RequirementEntry(int32* EntryPoint);
};

}


