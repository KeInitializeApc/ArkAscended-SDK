#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4C8 - 0x4C0)
// Class DataflowEnginePlugin.DataflowActor
class ADataflowActor : public AActor
{
public:
	class UDataflowComponent*                    DataflowComponent;                                 // 0x4C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, GlobalConfig)

	static class UClass* StaticClass();
	static class ADataflowActor* GetDefaultObj();

};

// 0x140 (0x7D0 - 0x690)
// Class DataflowEnginePlugin.DataflowComponent
class UDataflowComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_E52[0x140];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDataflowComponent* GetDefaultObj();

};

}


