#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA08 - 0x9F0)
// WidgetBlueprintGeneratedClass UI_MyMods.UI_MyMods_C
class UUI_MyMods_C : public UUI_ParentPage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class FString                                SortOption;                                        // 0x9F8(0x10)(BlueprintReadOnly, Net, Parm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_MyMods_C* GetDefaultObj();

	class UUI_ParentPage_C* OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool ReturnValue, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, bool* K2Node_SwitchEnum_CmpSuccess, const TArray<struct FInstallProgressMod>& CallFunc_ReturnModsOfCurrentPage_TrueModInfo, bool* K2Node_SwitchEnum_CmpSuccess_1);
	int32 UpdatePagination(bool Temp_bool_Variable, int32 CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt, class FText CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT, double* CallFunc_FMod_Remainder, int32* CallFunc_FMod_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 K2Node_Select_Default);
	void GetMods();
	void Event_On_Mod_Installed(const struct FInstallProgressMod& Mod);
	void Destruct();
	void Construct();
	bool ExecuteUbergraph_UI_MyMods(int32 EntryPoint, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const TArray<class UWidget*>& K2Node_MakeArray_Array, class UWidget* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


