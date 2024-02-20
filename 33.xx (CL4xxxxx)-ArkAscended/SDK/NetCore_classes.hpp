#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class NetCore.NetAnalyticsAggregatorConfig
class UNetAnalyticsAggregatorConfig : public UObject
{
public:
	TArray<struct FNetAnalyticsDataConfig>       NetAnalyticsData;                                  // 0x28(0x10)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UNetAnalyticsAggregatorConfig* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class NetCore.StatePerObjectConfig
class UStatePerObjectConfig : public UObject
{
public:
	uint8                                        Pad_1DBB[0x28];                                    // Fixing Size After Last Property  > TateDumper <
	class FString                                PerObjectConfigSection;                            // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnabled;                                          // 0x60(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_1DBE[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UStatePerObjectConfig* GetDefaultObj();

};

// 0x20 (0x88 - 0x68)
// Class NetCore.EscalationManagerConfig
class UEscalationManagerConfig : public UStatePerObjectConfig
{
public:
	TArray<class FString>                        EscalationSeverity;                                // 0x68(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DC1[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEscalationManagerConfig* GetDefaultObj();

};

}


