#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
class ULiveLinkFrameInterpolationProcessor : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkFrameInterpolationProcessor* GetDefaultObj();

};

// 0x138 (0x160 - 0x28)
// Class LiveLinkInterface.LiveLinkVirtualSubject
class ULiveLinkVirtualSubject : public UObject
{
public:
	uint8                                        Pad_1021[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                Role;                                              // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	TArray<struct FLiveLinkSubjectName>          Subjects;                                          // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class ULiveLinkFrameTranslator*>      FrameTranslators;                                  // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRebroadcastSubject;                               // 0x58(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1024[0x107];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkVirtualSubject* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkSourceFactory
class ULiveLinkSourceFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkSourceFactory* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class LiveLinkInterface.LiveLinkSourceSettings
class ULiveLinkSourceSettings : public UObject
{
public:
	enum class ELiveLinkSourceMode               Mode;                                              // 0x28(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_102C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLiveLinkSourceBufferManagementSettings BufferSettings;                                    // 0x30(0x60)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                ConnectionString;                                  // 0x90(0x10)(BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                Factory;                                           // 0xA0(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULiveLinkSourceSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkFramePreProcessor
class ULiveLinkFramePreProcessor : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkFramePreProcessor* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkFrameTranslator
class ULiveLinkFrameTranslator : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkFrameTranslator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkController
class ULiveLinkController : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkController* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkRole
class ULiveLinkRole : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkRole* GetDefaultObj();

};

// 0x50 (0xF8 - 0xA8)
// Class LiveLinkInterface.LiveLinkCurveRemapSettings
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
public:
	struct FLiveLinkCurveConversionSettings      CurveConversionSettings;                           // 0xA8(0x50)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULiveLinkCurveRemapSettings* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class LiveLinkInterface.LiveLinkSubjectSettings
class ULiveLinkSubjectSettings : public UObject
{
public:
	TArray<class ULiveLinkFramePreProcessor*>    PreProcessors;                                     // 0x28(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class ULiveLinkFrameInterpolationProcessor*  InterpolationProcessor;                            // 0x38(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class ULiveLinkFrameTranslator*>      Translators;                                       // 0x40(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                Role;                                              // 0x50(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	struct FFrameRate                            FrameRate;                                         // 0x58(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
	bool                                         bRebroadcastSubject;                               // 0x60(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_104C[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkSubjectSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkBasicRole
class ULiveLinkBasicRole : public ULiveLinkRole
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkBasicRole* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkAnimationRole
class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkAnimationRole* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkTransformRole
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkTransformRole* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkCameraRole
class ULiveLinkCameraRole : public ULiveLinkTransformRole
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkCameraRole* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkLightRole
class ULiveLinkLightRole : public ULiveLinkTransformRole
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkLightRole* GetDefaultObj();

};

}


