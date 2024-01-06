#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4D0 - 0x4C8)
// Class DataflowEnginePlugin.DataflowActor
class ADataflowActor : public AActor
{
public:
	class UDataflowComponent*                    DataflowComponent;                                 // 0x4C8(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class ADataflowActor* GetDefaultObj();

};

// 0x148 (0x7E0 - 0x698)
// Class DataflowEnginePlugin.DataflowComponent
class UDataflowComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_19A6[0x148];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDataflowComponent* GetDefaultObj();

};

}


