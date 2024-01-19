#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAudioParameterType : uint8
{
	None                           = 0,
	Boolean                        = 1,
	Integer                        = 2,
	Float                          = 3,
	String                         = 4,
	Object                         = 5,
	NoneArray                      = 6,
	BooleanArray                   = 7,
	IntegerArray                   = 8,
	FloatArray                     = 9,
	StringArray                    = 10,
	ObjectArray                    = 11,
	Trigger                        = 12,
	COUNT                          = 13,
	EAudioParameterType_MAX        = 14,
};

enum class EPcmBitDepthConversion : uint8
{
	SameAsSource                   = 0,
	Int16                          = 1,
	Float32                        = 2,
	EPcmBitDepthConversion_MAX     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xA0 - 0x0)
// ScriptStruct AudioExtensions.AudioParameter
struct FAudioParameter
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FloatParam;                                        // 0x8(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         BoolParam;                                         // 0xC(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2692[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        IntParam;                                          // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2693[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               ObjectParam;                                       // 0x18(0x8)(OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FString                                StringParam;                                       // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<float>                                ArrayFloatParam;                                   // 0x30(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<bool>                                 ArrayBoolParam;                                    // 0x40(0x10)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                ArrayIntParam;                                     // 0x50(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class UObject*>                       ArrayObjectParam;                                  // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        ArrayStringParam;                                  // 0x70(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EAudioParameterType               ParamType;                                         // 0x80(0x1)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2695[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  TypeName;                                          // 0x84(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2696[0x14];                                    // Fixing Size Of Struct > TateDumper <
};

}


