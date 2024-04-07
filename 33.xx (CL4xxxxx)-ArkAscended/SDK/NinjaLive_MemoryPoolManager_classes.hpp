#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9A (0x55A - 0x4C0)
// BlueprintGeneratedClass NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C
class ANinjaLive_MemoryPoolManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UMaterialBillboardComponent*           EditorIcon;                                        // 0x4C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class USceneComponent*                       Root;                                              // 0x4D0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	bool                                         DisableMemoryManager;                              // 0x4D8(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3CF7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        AmountOfRenderTargetSetsToGenerate;                // 0x4DC(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	enum class ESimPrecision_Enum                Precision;                                         // 0x4E0(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3CF8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        PrecisionIndex;                                    // 0x4E4(0x4)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        ResolutionX;                                       // 0x4E8(0x4)(ConstParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        ResolutionY;                                       // 0x4EC(0x4)(Edit, ExportObject, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FRenderTargetListItem>         RMinusRenderTargetsList;                           // 0x4F0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FRenderTargetListItem>         RGMinusRenderTargetsList;                          // 0x500(0x10)(BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FRenderTargetListItem>         RGBAMinusRenderTargetsList;                        // 0x510(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         MMInitFinished;                                    // 0x520(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         PrintInitDebugMessages;                            // 0x521(0x1)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         PrintRuntimeDebugMsg;                              // 0x522(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         PrintRuntimeDebugMsgVerbose;                       // 0x523(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3CF9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       DebugTextLifetime;                                 // 0x528(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        ExtraRenderTargetsForDensityInput;                 // 0x530(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3CFA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MemConsumptionTotal;                               // 0x538(0x8)(Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         SaveDebugTextToDefaultLog;                         // 0x540(0x1)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3CFB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                MemAvailableMax;                                   // 0x548(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         HalfResPressureAndDivergenceBuffers;               // 0x558(0x1)(BlueprintVisible, ExportObject, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         SimAreaClamp;                                      // 0x559(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ANinjaLive_MemoryPoolManager_C* GetDefaultObj();

	double MemCount(enum class ESimPrecision_Enum Temp_byte_Variable, int32* Temp_int_Variable, int32* Temp_int_Variable_1, int32 K2Node_Select_Default, double* CallFunc_Add_DoubleDouble_ReturnValue);
	class UTextureRenderTarget2D* SetRenderTargetAttribs(class UTextureRenderTarget2D** InputPin, enum class ETextureAddress Temp_byte_Variable, enum class ETextureAddress Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ETextureAddress K2Node_Select_Default);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	bool PrintMemStatus();
	int32 ExecuteUbergraph_NinjaLive_MemoryPoolManager(int32* EntryPoint, enum class ESimPrecision_Enum Temp_byte_Variable, float K2Node_Event_DeltaSeconds, enum class ETextureRenderTargetFormat Temp_byte_Variable_1, double* CallFunc_Conv_BoolToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, enum class ETextureRenderTargetFormat Temp_byte_Variable_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue, int32* Temp_int_Variable, int32 Temp_int_Array_Index_Variable, enum class ETextureRenderTargetFormat Temp_byte_Variable_3, int32 CallFunc_Len_ReturnValue, int32* CallFunc_FindSubstring_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, enum class ETextureRenderTargetFormat Temp_byte_Variable_4, int32* Temp_int_Variable_1, enum class ETextureRenderTargetFormat K2Node_Select_Default, enum class ETextureRenderTargetFormat K2Node_Select_Default_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, enum class ETextureRenderTargetFormat Temp_byte_Variable_5, int32 Temp_int_Loop_Counter_Variable, int32* Temp_int_Variable_2, int32* Temp_int_Variable_3, int32* Temp_int_Variable_4, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class ETextureRenderTargetFormat Temp_byte_Variable_6, int32* Temp_int_Variable_5, int32 K2Node_Select_Default_2, int32* Temp_int_Variable_6, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32* Temp_int_Variable_7, class AActor* CallFunc_Array_Get_Item, int32* Temp_int_Variable_8, enum class ETextureRenderTargetFormat K2Node_Select_Default_3, int32* CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32* CallFunc_MakeLiteralInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_3, int32* CallFunc_MakeLiteralInt_ReturnValue_2);
};

}


