#include <string>
#include <vector>
#include <DistortionFunction.h>

#define RAPIDJSON_HAS_STDSTRING 1

#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/prettywriter.h" 

using namespace rapidjson;

#include "MakeKeypointJson.h"

#include <graphics/string_manip.h>

std::wstring rename_label_22(const std::string& label)
{
    std::wstring label_kor = L"";

    if (label.compare("leftEar") == 0)
        label_kor.append(L"���� ��");
    else if (label.compare("leftEye") == 0)
        label_kor.append(L"���� ��");
    else if (label.compare("nose") == 0)
        label_kor.append(L"��");
    else if (label.compare("rightEye") == 0)
        label_kor.append(L"������ ��");
    else if (label.compare("rightEar") == 0)
        label_kor.append(L"������ ��");

    else if (label.compare("leftHand") == 0)
        label_kor.append(L"���� �ո�");
    else if (label.compare("leftElbow") == 0)
        label_kor.append(L"���� �Ȳ�ġ");
    else if (label.compare("leftShoulder") == 0)
        label_kor.append(L"���� ���");
    else if (label.compare("sternum") == 0)
        label_kor.append(L"��");
    else if (label.compare("rightShoulder") == 0)
        label_kor.append(L"������ ���");

    else if (label.compare("rightElbow") == 0)
        label_kor.append(L"������ �Ȳ�ġ");
    else if (label.compare("rightHand") == 0)
        label_kor.append(L"������ �ո�");
    else if (label.compare("leftThigh") == 0)
        label_kor.append(L"���� ������");
    else if (label.compare("leftKnee") == 0)
        label_kor.append(L"���� ����");
    else if (label.compare("leftFoot") == 0)
        label_kor.append(L"���� �߸�");

    else if (label.compare("LBigToe") == 0)
        label_kor.append(L"���� �����߰���");
    else if (label.compare("LHeel") == 0)
        label_kor.append(L"���� �ߵ޲�ġ");
    else if (label.compare("rightThigh") == 0)
        label_kor.append(L"������ ������");
    else if (label.compare("rightKnee") == 0)
        label_kor.append(L"������ ����");
    else if (label.compare("rightFoot") == 0)
        label_kor.append(L"������ �߸�");

    else if (label.compare("RBigToe") == 0)
        label_kor.append(L"������ �����߰���");
    else if (label.compare("RHeel") == 0)
        label_kor.append(L"������ �ߵ޲�ġ");

	return label_kor;
}

std::wstring rename_label_30(const std::string& label)
{
    std::wstring label_kor = L"";

    if (label.compare("RightFootEE") == 0)
        label_kor.append(L"������ �� ��");
    else if (label.compare("RightToeBase") == 0)
        label_kor.append(L"������ �߰��� ������");
    else if (label.compare("RightFoot") == 0)
        label_kor.append(L"������ �߸�");
    else if (label.compare("RightLeg") == 0)
        label_kor.append(L"������ ����");
    else if (label.compare("RightUpLeg") == 0)
        label_kor.append(L"������ ������");

    else if (label.compare("LeftFootEE") == 0)
        label_kor.append(L"���� �� ��");
    else if (label.compare("LeftToeBase") == 0)
        label_kor.append(L"���� �߰��� ������");
    else if (label.compare("LeftFoot") == 0)
        label_kor.append(L"���� �߸�");
    else if (label.compare("LeftLeg") == 0)
        label_kor.append(L"���� ����");
    else if (label.compare("LeftUpLeg") == 0)
        label_kor.append(L"���� ������");

    else if (label.compare("RightHandEE") == 0)
        label_kor.append(L"������ �հ��� ������");
    else if (label.compare("RightHand") == 0)
        label_kor.append(L"������ �ո�");
    else if (label.compare("RightForeArm") == 0)
        label_kor.append(L"������ �Ȳ�ġ");
    else if (label.compare("RightArm") == 0)
        label_kor.append(L"������ ���");
    else if (label.compare("RightShoulder") == 0)
        label_kor.append(L"������ ���");

    else if (label.compare("LeftHandEE") == 0)
        label_kor.append(L"���� �հ��� ������");
    else if (label.compare("LeftHand") == 0)
        label_kor.append(L"���� �ո�");
    else if (label.compare("LeftForeArm") == 0)
        label_kor.append(L"���� �Ȳ�ġ");
    else if (label.compare("LeftArm") == 0)
        label_kor.append(L"���� ���");
    else if (label.compare("LeftShoulder") == 0)
        label_kor.append(L"���� ���");

    else if (label.compare("HeadEE") == 0)
        label_kor.append(L"������");
    else if (label.compare("Head") == 0)
        label_kor.append(L"�Ӹ�");
    else if (label.compare("Neck") == 0)
        label_kor.append(L"��");
    else if (label.compare("Spine4") == 0)
        label_kor.append(L"ô��4");
    else if (label.compare("Spine3") == 0)
        label_kor.append(L"ô��3");

    else if (label.compare("Spine2") == 0)
        label_kor.append(L"ô��2");
    else if (label.compare("Spine1") == 0)
        label_kor.append(L"ô��1");
    else if (label.compare("Spine") == 0)
        label_kor.append(L"ô��0");
    else if (label.compare("Hips") == 0)
        label_kor.append(L"������");
    else if (label.compare("Nose") == 0)
        label_kor.append(L"��");

   return label_kor;
}

bool MakeKeypointJson(
    const std::string& csvFilePath,
    const std::string& jsonFilePath,
    const std::string& label_kor,
    int NoOfPoint, int width, int length) 
{
	return true;
}


MakeKeypointJson::MakeKeypointJson()
{
    m_pdoc = NULL;
    m_paryAnnotation = NULL;

    create();
}

MakeKeypointJson::~MakeKeypointJson()
{
    distory();
}

void MakeKeypointJson::create(void)
{
    if (m_pdoc != NULL)
        distory();

    m_pdoc = new Document(kObjectType);

    m_paryAnnotation = new Value(kArrayType);

}

void MakeKeypointJson::distory(void)
{
    if(m_pdoc!=NULL){
        delete m_pdoc;
        m_pdoc = NULL;
    }
    

    if (m_paryAnnotation != NULL) {
        delete m_paryAnnotation;
        m_paryAnnotation = NULL;
    }
    
}

bool MakeKeypointJson::FileWrite(FILE* fp, bool isPretty)
{
    StringBuffer buffer;
    if (isPretty)
    {
        PrettyWriter<StringBuffer> writer(buffer);
        m_pdoc->Accept(writer);
    }
    else
    {
        Writer<StringBuffer> writer(buffer);
        m_pdoc->Accept(writer);
    }

    fprintf(fp, "%s", buffer.GetString());
    return true;
}

/*
#include <fstream>

inline const char* MakeKeypointJson::JsonDocToString(const Document& doc, bool isPretty) const
{
    StringBuffer buffer;
    if (isPretty)
    {
        PrettyWriter<StringBuffer> writer(buffer);
        doc.Accept(writer);
    }
    else
    {
        Writer<StringBuffer> writer(buffer);
        doc.Accept(writer);

    }


    //for test
    std::ofstream ofs("output.json");
    ofs << buffer.GetString();
    ofs.close();

    return buffer.GetString();
}

const char* MakeKeypointJson::GetJsonString(bool isPretty) const
{
    return JsonDocToString(*m_pdoc);
}
*/

void MakeKeypointJson::AddAnnotation(void)
{
    Document::AllocatorType& allocator = m_pdoc->GetAllocator();
    m_pdoc->AddMember("annotation", *m_paryAnnotation, allocator);

    //m_pdoc->AddMember("annotation00", "00", allocator);
    //m_pdoc->AddMember("annotation01", "11", allocator);

}

void MakeKeypointJson::AddPose(const ElementAnnotation* annotation)
{
    int size = int(annotation->keypoints.size());
    if (size != annotation->keypoint_names.size())
    {
        printf("!!Error : \"keypoints\" size does not match. \n");
    }

    Document::AllocatorType& allocator = m_pdoc->GetAllocator();

    Value pose(kObjectType);
    {
        Value location(kObjectType);
        {
            //for 30 keypoints or 22 keypoints 
            for (int i = 0; i<size; i++)
            {
                Value object(kObjectType);
                {
                    int x = annotation->keypoints[i][0];// 0;//���⿡ �Է�
                    int y = annotation->keypoints[i][1];
                    object.AddMember("x", x, allocator);
                    object.AddMember("y", y, allocator);
                    object.AddMember("view", 1, allocator);
                }
                //support 30 keypoints
                std::wstring keypoint_name_kor = rename_label_30(annotation->keypoint_names[i]);
                std::string keypoint_name = graphics::to_utf8(keypoint_name_kor );
                
                Value key(keypoint_name.c_str(), allocator);

                location.AddMember(key, object, allocator);
            }
        }

        pose.AddMember("location", location, allocator);

        Value value_model(annotation->lable.c_str(), allocator);
        pose.AddMember("label", value_model, allocator);

        Value key_time(annotation->time_unit_name.c_str(), allocator);
        pose.AddMember(key_time, int(annotation->time_stamp), allocator);
        pose.AddMember("type", "pose", allocator);
    }

    Value pose_parent(kObjectType);
    pose_parent.AddMember("pose", pose, allocator);
    m_paryAnnotation->PushBack(pose_parent, allocator);
}

/*
void MakeKeypointJson::AddPose()
{


    //write json
    rapidjson::Document document;
    document.SetObject();
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();

    rapidjson::Value array(rapidjson::kArrayType);

    for (int i = 0; i < 10; i++)
    {
        rapidjson::Value object(rapidjson::kObjectType);
        object.AddMember("id", 1, allocator);
        object.AddMember("name", "test", allocator);
        object.AddMember("version", 1.01, allocator);
        object.AddMember("vip", true, allocator);

        object.SetInt(i);
        array.PushBack(object, allocator);
    }

    document.AddMember("title", "PLAYER INFO", allocator);
    document.AddMember("players", array, allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    auto out = buffer.GetString();


    Document::AllocatorType& allocator = m_pdoc->GetAllocator();
    m_pdoc->AddMember("project", "rapidjson", allocator);
    m_pdoc->AddMember("stars", 10, allocator);


    std::string jsonString = JsonDocToString(*m_pdoc, true);
    printf(jsonString.c_str());
}
*/