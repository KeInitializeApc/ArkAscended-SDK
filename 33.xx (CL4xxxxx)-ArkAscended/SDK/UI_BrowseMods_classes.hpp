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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class FString                                InitialClassCategoryName;                          // 0x9F8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_BrowseMods_C* GetDefaultObj();

	TArray<struct FInstallProgressMod> OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess);
	int32 UpdatePageCount(struct FCFCoreApiResponsePagination* CFCoreApiResponsePagination, bool Temp_bool_Variable, double* CallFunc_FMod_Remainder, int32* CallFunc_FMod_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 K2Node_Select_Default);
	class FText GetCurrentSearchInput(class FText CurrentSearchInput);
	void ResetPageNum();
	void GetMods();
	void Construct();
	void Destruct();
	void ConstructParentPage();
	bool ExecuteUbergraph_UI_BrowseMods(int32 EntryPoint, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1);
};

}


