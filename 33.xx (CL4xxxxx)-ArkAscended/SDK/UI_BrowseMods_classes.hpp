#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA08 - 0x9F0)
// WidgetBlueprintGeneratedClass UI_BrowseMods.UI_BrowseMods_C
class UUI_BrowseMods_C : public UUI_ParentPage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class FString                                InitialClassCategoryName;                          // 0x9F8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_BrowseMods_C* GetDefaultObj();

	TArray<struct FInstallProgressMod> OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool* ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess);
	int32 UpdatePageCount(struct FCFCoreApiResponsePagination* CFCoreApiResponsePagination, int32* CallFunc_CalculateModsPerPage_Mods, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1);
	class FText GetCurrentSearchInput(class FText* CallFunc_Conv_StringToText_ReturnValue);
	void ResetPageNum();
	void GetMods();
	void Construct();
	void Destruct();
	void ConstructParentPage();
	bool ExecuteUbergraph_UI_BrowseMods(int32 EntryPoint, int32* CallFunc_CalculateModsPerPage_Mods, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1);
};

}


